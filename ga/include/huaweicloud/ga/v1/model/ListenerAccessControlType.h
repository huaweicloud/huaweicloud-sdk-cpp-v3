
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_ListenerAccessControlType_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_ListenerAccessControlType_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
class HUAWEICLOUD_GA_V1_EXPORT  ListenerAccessControlType
: public ModelBase
{
public:
    ListenerAccessControlType();
    virtual ~ListenerAccessControlType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    enum class eListenerAccessControlType 
    {
        ListenerAccessControlType_BLACK,
        ListenerAccessControlType_WHITE,
    };

    eListenerAccessControlType getValue() const;
    void setValue(eListenerAccessControlType const value);

protected:
    eListenerAccessControlType value_;

};

}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_ListenerAccessControlType_H_

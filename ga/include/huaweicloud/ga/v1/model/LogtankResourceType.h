
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_LogtankResourceType_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_LogtankResourceType_H_


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
class HUAWEICLOUD_GA_V1_EXPORT  LogtankResourceType
: public ModelBase
{
public:
    LogtankResourceType();
    virtual ~LogtankResourceType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    enum class eLogtankResourceType 
    {
        LogtankResourceType_LISTENER,
    };

    eLogtankResourceType getValue() const;
    void setValue(eLogtankResourceType const value);

protected:
    eLogtankResourceType value_;

};

}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_LogtankResourceType_H_


#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_Area_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_Area_H_


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
class HUAWEICLOUD_GA_V1_EXPORT  Area
: public ModelBase
{
public:
    Area();
    virtual ~Area();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    enum class eArea 
    {
        Area_OUTOFCM,
        Area_CM,
    };

    eArea getValue() const;
    void setValue(eArea const value);

protected:
    eArea value_;

};

}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_Area_H_


#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_OrganizationalUnitTypeForSetup_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_OrganizationalUnitTypeForSetup_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
class HUAWEICLOUD_RGC_V1_EXPORT  OrganizationalUnitTypeForSetup
: public ModelBase
{
public:
    OrganizationalUnitTypeForSetup();
    virtual ~OrganizationalUnitTypeForSetup();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    enum class eOrganizationalUnitTypeForSetup 
    {
        OrganizationalUnitTypeForSetup_CORE,
        OrganizationalUnitTypeForSetup_CUSTOM,
    };

    eOrganizationalUnitTypeForSetup getValue() const;
    void setValue(eOrganizationalUnitTypeForSetup const value);

protected:
    eOrganizationalUnitTypeForSetup value_;

};

}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_OrganizationalUnitTypeForSetup_H_

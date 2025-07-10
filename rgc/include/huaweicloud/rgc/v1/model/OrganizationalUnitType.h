
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_OrganizationalUnitType_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_OrganizationalUnitType_H_


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
class HUAWEICLOUD_RGC_V1_EXPORT  OrganizationalUnitType
: public ModelBase
{
public:
    OrganizationalUnitType();
    virtual ~OrganizationalUnitType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    enum class eOrganizationalUnitType 
    {
        OrganizationalUnitType_CORE,
        OrganizationalUnitType_CUSTOM,
        OrganizationalUnitType_ROOT,
    };

    eOrganizationalUnitType getValue() const;
    void setValue(eOrganizationalUnitType const value);

protected:
    eOrganizationalUnitType value_;

};

}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_OrganizationalUnitType_H_

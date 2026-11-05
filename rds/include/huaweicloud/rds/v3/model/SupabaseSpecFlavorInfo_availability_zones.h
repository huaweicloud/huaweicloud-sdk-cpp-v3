
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SupabaseSpecFlavorInfo_availability_zones_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SupabaseSpecFlavorInfo_availability_zones_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SupabaseSpecFlavorInfo_availability_zones
    : public ModelBase
{
public:
    SupabaseSpecFlavorInfo_availability_zones();
    virtual ~SupabaseSpecFlavorInfo_availability_zones();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SupabaseSpecFlavorInfo_availability_zones members

    /// <summary>
    /// 
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string code_;
    bool codeIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SupabaseSpecFlavorInfo_availability_zones_H_

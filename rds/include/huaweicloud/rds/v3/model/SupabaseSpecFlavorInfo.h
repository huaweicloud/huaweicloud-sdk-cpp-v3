
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SupabaseSpecFlavorInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SupabaseSpecFlavorInfo_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/SupabaseSpecFlavorInfo_availability_zones.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 规格信息，含可售AZ和版本。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SupabaseSpecFlavorInfo
    : public ModelBase
{
public:
    SupabaseSpecFlavorInfo();
    virtual ~SupabaseSpecFlavorInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SupabaseSpecFlavorInfo members

    /// <summary>
    /// 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getVcpus() const;
    bool vcpusIsSet() const;
    void unsetvcpus();
    void setVcpus(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getRam() const;
    bool ramIsSet() const;
    void unsetram();
    void setRam(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getSpecCode() const;
    bool specCodeIsSet() const;
    void unsetspecCode();
    void setSpecCode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getGroupType() const;
    bool groupTypeIsSet() const;
    void unsetgroupType();
    void setGroupType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<SupabaseSpecFlavorInfo_availability_zones>& getAvailabilityZones();
    bool availabilityZonesIsSet() const;
    void unsetavailabilityZones();
    void setAvailabilityZones(const std::vector<SupabaseSpecFlavorInfo_availability_zones>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string mode_;
    bool modeIsSet_;
    std::string version_;
    bool versionIsSet_;
    int32_t vcpus_;
    bool vcpusIsSet_;
    int32_t ram_;
    bool ramIsSet_;
    std::string specCode_;
    bool specCodeIsSet_;
    std::string groupType_;
    bool groupTypeIsSet_;
    std::vector<SupabaseSpecFlavorInfo_availability_zones> availabilityZones_;
    bool availabilityZonesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SupabaseSpecFlavorInfo_H_


#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_OffsiteBackupInstance_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_OffsiteBackupInstance_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ParaGroupDatastore.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 跨区域备份实例信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  OffsiteBackupInstance
    : public ModelBase
{
public:
    OffsiteBackupInstance();
    virtual ~OffsiteBackupInstance();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OffsiteBackupInstance members

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 创建的实例名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 源区域。
    /// </summary>

    std::string getSourceRegion() const;
    bool sourceRegionIsSet() const;
    void unsetsourceRegion();
    void setSourceRegion(const std::string& value);

    /// <summary>
    /// 租户在源区域下的project ID。
    /// </summary>

    std::string getSourceProjectId() const;
    bool sourceProjectIdIsSet() const;
    void unsetsourceProjectId();
    void setSourceProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ParaGroupDatastore getDatastore() const;
    bool datastoreIsSet() const;
    void unsetdatastore();
    void setDatastore(const ParaGroupDatastore& value);

    /// <summary>
    /// 跨区域备份所在区域。
    /// </summary>

    std::string getDestinationRegion() const;
    bool destinationRegionIsSet() const;
    void unsetdestinationRegion();
    void setDestinationRegion(const std::string& value);

    /// <summary>
    /// 租户在目标区域下的project ID。
    /// </summary>

    std::string getDestinationProjectId() const;
    bool destinationProjectIdIsSet() const;
    void unsetdestinationProjectId();
    void setDestinationProjectId(const std::string& value);

    /// <summary>
    /// 跨区域备份保留天数。
    /// </summary>

    int64_t getKeepDays() const;
    bool keepDaysIsSet() const;
    void unsetkeepDays();
    void setKeepDays(int64_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string sourceRegion_;
    bool sourceRegionIsSet_;
    std::string sourceProjectId_;
    bool sourceProjectIdIsSet_;
    ParaGroupDatastore datastore_;
    bool datastoreIsSet_;
    std::string destinationRegion_;
    bool destinationRegionIsSet_;
    std::string destinationProjectId_;
    bool destinationProjectIdIsSet_;
    int64_t keepDays_;
    bool keepDaysIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_OffsiteBackupInstance_H_

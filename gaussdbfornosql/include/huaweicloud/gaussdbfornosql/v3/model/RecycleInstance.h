
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RecycleInstance_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RecycleInstance_H_

#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbfornosql/v3/model/RecycleDatastore.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 回收备份实例信息。
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  RecycleInstance
    : public ModelBase
{
public:
    RecycleInstance();
    virtual ~RecycleInstance();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RecycleInstance members

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 实例名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 实例类型。   - 取值为“Cluster”，表示GaussDB(for Cassandra)、GaussDB(for Influx)、GaussDB(for Redis)集群实例类型。   - 取值为“ReplicaSet”，表示GaussDB(for Mongo)副本集实例类型。   - 取值为“InfluxdbSingle”，表示GaussDB(for Influx)单节点实例类型。   - 取值为“Replication”，表示GaussDB(for Redis)主备版实例类型。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RecycleDatastore getDatastore() const;
    bool datastoreIsSet() const;
    void unsetdatastore();
    void setDatastore(const RecycleDatastore& value);

    /// <summary>
    /// 计费方式。 计费方式。   - prePaid：预付费，即包年/包月。   - postPaid：后付费，即按需付费。
    /// </summary>

    std::string getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::string& value);

    /// <summary>
    /// 企业项目ID，取值为“0”，表示为default企业项目
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 备份ID。
    /// </summary>

    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);

    /// <summary>
    /// 实例创建时间。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 实例删除时间。
    /// </summary>

    std::string getDeletedAt() const;
    bool deletedAtIsSet() const;
    void unsetdeletedAt();
    void setDeletedAt(const std::string& value);

    /// <summary>
    /// 回收备份保留截止时间。
    /// </summary>

    std::string getRetainedUntil() const;
    bool retainedUntilIsSet() const;
    void unsetretainedUntil();
    void setRetainedUntil(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string mode_;
    bool modeIsSet_;
    RecycleDatastore datastore_;
    bool datastoreIsSet_;
    std::string chargeMode_;
    bool chargeModeIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string backupId_;
    bool backupIdIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string deletedAt_;
    bool deletedAtIsSet_;
    std::string retainedUntil_;
    bool retainedUntilIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RecycleInstance_H_

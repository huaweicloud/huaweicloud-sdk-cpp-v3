
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_RecycleInstance_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_RecycleInstance_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/RecycleDatastore.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  RecycleInstance
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
    /// 实例ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 实例名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 实例类型。支持集群、副本集、以及单节点。 取值   - Sharding   - ReplicaSet   - Single
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
    /// 计费方式。 - 取值为“0”，表示按需计费。 - 取值为“1”，表示包年/包月计费。
    /// </summary>

    std::string getPayMode() const;
    bool payModeIsSet() const;
    void unsetpayMode();
    void setPayMode(const std::string& value);

    /// <summary>
    /// 企业项目ID，取值为“0”，表示为default企业项目
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 备份ID
    /// </summary>

    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 删除时间
    /// </summary>

    std::string getDeletedAt() const;
    bool deletedAtIsSet() const;
    void unsetdeletedAt();
    void setDeletedAt(const std::string& value);

    /// <summary>
    /// 保留截止时间
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
    std::string payMode_;
    bool payModeIsSet_;
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

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_RecycleInstance_H_

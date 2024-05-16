
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_QueryAction_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_QueryAction_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  QueryAction
    : public ModelBase
{
public:
    QueryAction();
    virtual ~QueryAction();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryAction members

    /// <summary>
    /// 实例或节点动作ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 实例或节点动作名称。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 实例或节点动作对象ID。
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);

    /// <summary>
    /// 实例或节点动作类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 实例或节点动作任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 实例或节点动作状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 实例或节点动作创建时间。
    /// </summary>

    int64_t getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(int64_t value);

    /// <summary>
    /// 实例或节点动作更新时间。
    /// </summary>

    int64_t getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(int64_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string action_;
    bool actionIsSet_;
    std::string objectId_;
    bool objectIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    int64_t createdAt_;
    bool createdAtIsSet_;
    int64_t updatedAt_;
    bool updatedAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_QueryAction_H_

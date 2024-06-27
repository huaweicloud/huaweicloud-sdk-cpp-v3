
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChQueryActionInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChQueryActionInfo_H_


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
/// 实例操作动作。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ChQueryActionInfo
    : public ModelBase
{
public:
    ChQueryActionInfo();
    virtual ~ChQueryActionInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChQueryActionInfo members

    /// <summary>
    /// 实例动作ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 实例动作名称。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 实例动作对象ID。
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);

    /// <summary>
    /// 实例动作类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 实例动作任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 实例动作状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 实例动作创建时间。
    /// </summary>

    int64_t getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(int64_t value);

    /// <summary>
    /// 实例动作更新时间。
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChQueryActionInfo_H_

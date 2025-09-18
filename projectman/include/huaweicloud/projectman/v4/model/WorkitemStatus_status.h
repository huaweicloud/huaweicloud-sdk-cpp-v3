
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkitemStatus_status_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkitemStatus_status_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作项的状态
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  WorkitemStatus_status
    : public ModelBase
{
public:
    WorkitemStatus_status();
    virtual ~WorkitemStatus_status();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkitemStatus_status members

    /// <summary>
    /// 工作项的状态id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 状态名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 工作项状态的类型， BACKLOG( \&quot;初始化\&quot;), READY(\&quot;待启动\&quot;), IN_PROGRESS(\&quot;进行中\&quot;), COMPLETE(\&quot;已完成\&quot;), DONE(\&quot;已结束\&quot;),
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 工作项状态的描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 工作项状态的父状态id
    /// </summary>

    std::string getParentStatusId() const;
    bool parentStatusIdIsSet() const;
    void unsetparentStatusId();
    void setParentStatusId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string parentStatusId_;
    bool parentStatusIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkitemStatus_status_H_

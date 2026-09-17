
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListPlanRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListPlanRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListPlanRequest
    : public ModelBase
{
public:
    ListPlanRequest();
    virtual ~ListPlanRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPlanRequest members

    /// <summary>
    /// 项目32位ID，项目唯一标识。通过查询IPD项目列表获取，响应消息体中的id字段的值就是项目ID。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释：** 发布/迭代名称 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getKeyWord() const;
    bool keyWordIsSet() const;
    void unsetkeyWord();
    void setKeyWord(const std::string& value);

    /// <summary>
    /// **参数解释：** 更新发布/迭代时间，unix时间戳，单位：毫秒  样例：1576114296000,1576114396000 **约束限制：**  起止时间均为13位的时间戳字符串，使用英文逗号分割。 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getUpdatedTimeInterval() const;
    bool updatedTimeIntervalIsSet() const;
    void unsetupdatedTimeInterval();
    void setUpdatedTimeInterval(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string keyWord_;
    bool keyWordIsSet_;
    std::string updatedTimeInterval_;
    bool updatedTimeIntervalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListPlanRequest& dereference_from_shared_ptr(std::shared_ptr<ListPlanRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListPlanRequest_H_

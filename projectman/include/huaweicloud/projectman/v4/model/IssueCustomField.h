
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueCustomField_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueCustomField_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 自定义字段
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueCustomField
    : public ModelBase
{
public:
    IssueCustomField();
    virtual ~IssueCustomField();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueCustomField members

    /// <summary>
    /// 自定义字段
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 自定义字段
    /// </summary>

    std::string getCustomField() const;
    bool customFieldIsSet() const;
    void unsetcustomField();
    void setCustomField(const std::string& value);

    /// <summary>
    /// 自定义字段的可选值，多个值以英文逗号区分
    /// </summary>

    std::string getOptions() const;
    bool optionsIsSet() const;
    void unsetoptions();
    void setOptions(const std::string& value);

    /// <summary>
    /// 自定义字段类型， textArea 多行文本，只能包含汉字、英文大小写字母、数字、下划线和连接符，不能超过500字符； text 单行文本， 只能包含汉字、英文大小写字母、数字、下划线和连接符，不能超过500字符； select 下拉框，只能包含汉字、英文大小写字母、数字、下划线和连接符，每个选项最大长度40个字符，最多可定义60个选项； number 数字，取值范围由用户创建自定义字段时设置； date 日期 精确到年月日， time_date 日期 精确到时分秒， 长整型时间戳； checkbox 多选框，只能包含汉字、英文大小写字母、数字、下划线和连接符，每个选项最大长度40个字符，最多可定义60个选项； radio 单选框，只能包含汉字、英文大小写字母、数字、下划线和连接符，每个选项最大长度40个字符，最多可定义60个选项；
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 自定义字段支持的工作项类型 2任务/Task,3缺陷/Bug,5Epic,6Feature,7Story
    /// </summary>

    std::vector<int32_t>& getTrackerIds();
    bool trackerIdsIsSet() const;
    void unsettrackerIds();
    void setTrackerIds(std::vector<int32_t> value);

    /// <summary>
    /// 自定义字段创建时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string customField_;
    bool customFieldIsSet_;
    std::string options_;
    bool optionsIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::vector<int32_t> trackerIds_;
    bool trackerIdsIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueCustomField_H_

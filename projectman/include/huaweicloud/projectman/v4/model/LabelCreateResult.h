
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_LabelCreateResult_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_LabelCreateResult_H_


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
/// 工作项标签对象
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  LabelCreateResult
    : public ModelBase
{
public:
    LabelCreateResult();
    virtual ~LabelCreateResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LabelCreateResult members

    /// <summary>
    /// 标签ID，可通过查询标签列表接口获取，响应消息体中的id字段的值就是标签ID。 18~19个字符的数字字符串。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 标签所属工作项类型编码。
    /// </summary>

    std::vector<std::string>& getCategoryTypes();
    bool categoryTypesIsSet() const;
    void unsetcategoryTypes();
    void setCategoryTypes(const std::vector<std::string>& value);

    /// <summary>
    /// 标签颜色RGB。 0~16个字符。
    /// </summary>

    std::string getColor() const;
    bool colorIsSet() const;
    void unsetcolor();
    void setColor(const std::string& value);

    /// <summary>
    /// 标签标题。 2~256个字符。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::vector<std::string> categoryTypes_;
    bool categoryTypesIsSet_;
    std::string color_;
    bool colorIsSet_;
    std::string title_;
    bool titleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_LabelCreateResult_H_

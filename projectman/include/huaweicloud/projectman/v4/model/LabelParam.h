
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_LabelParam_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_LabelParam_H_


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
/// 标签创建/编辑参数
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  LabelParam
    : public ModelBase
{
public:
    LabelParam();
    virtual ~LabelParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LabelParam members

    /// <summary>
    /// 标签所属工作项类型，对应工作项的type字段，枚举类型。不推荐使用此参数，建议使用category_types参数。
    /// </summary>

    std::string getLabelType() const;
    bool labelTypeIsSet() const;
    void unsetlabelType();
    void setLabelType(const std::string& value);

    /// <summary>
    /// 标签颜色，作为更新参数时非必填。
    /// </summary>

    std::string getColor() const;
    bool colorIsSet() const;
    void unsetcolor();
    void setColor(const std::string& value);

    /// <summary>
    /// 标签标题。 1~30个字符。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 标签所属工作项类型编码。
    /// </summary>

    std::vector<std::string>& getCategoryTypes();
    bool categoryTypesIsSet() const;
    void unsetcategoryTypes();
    void setCategoryTypes(const std::vector<std::string>& value);


protected:
    std::string labelType_;
    bool labelTypeIsSet_;
    std::string color_;
    bool colorIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::vector<std::string> categoryTypes_;
    bool categoryTypesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_LabelParam_H_

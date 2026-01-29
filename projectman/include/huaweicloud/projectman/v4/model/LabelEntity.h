
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_LabelEntity_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_LabelEntity_H_


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
/// 工作项标签对象
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  LabelEntity
    : public ModelBase
{
public:
    LabelEntity();
    virtual ~LabelEntity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LabelEntity members

    /// <summary>
    /// 标签id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 标签所属工作项类型，对应工作项的type字段
    /// </summary>

    std::string getLabelType() const;
    bool labelTypeIsSet() const;
    void unsetlabelType();
    void setLabelType(const std::string& value);

    /// <summary>
    /// 标签颜色RGB
    /// </summary>

    std::string getColor() const;
    bool colorIsSet() const;
    void unsetcolor();
    void setColor(const std::string& value);

    /// <summary>
    /// 标签标题
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string labelType_;
    bool labelTypeIsSet_;
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

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_LabelEntity_H_

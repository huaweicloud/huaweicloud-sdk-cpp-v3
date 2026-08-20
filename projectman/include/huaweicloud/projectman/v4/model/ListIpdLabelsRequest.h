
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIpdLabelsRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIpdLabelsRequest_H_


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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListIpdLabelsRequest
    : public ModelBase
{
public:
    ListIpdLabelsRequest();
    virtual ~ListIpdLabelsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListIpdLabelsRequest members

    /// <summary>
    /// 项目32位ID，项目唯一标识。通过查询IPD项目列表获取，响应消息体中的id字段的值就是项目ID。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 标签归属的工作项分类，不传该参数时默认查询所有类型下的标签。不推荐使用此参数，建议使用category_types参数。
    /// </summary>

    std::string getLabelType() const;
    bool labelTypeIsSet() const;
    void unsetlabelType();
    void setLabelType(const std::string& value);

    /// <summary>
    /// 标签名称
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 工作项类型编码。
    /// </summary>

    std::string getCategoryTypes() const;
    bool categoryTypesIsSet() const;
    void unsetcategoryTypes();
    void setCategoryTypes(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string labelType_;
    bool labelTypeIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string categoryTypes_;
    bool categoryTypesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListIpdLabelsRequest& dereference_from_shared_ptr(std::shared_ptr<ListIpdLabelsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIpdLabelsRequest_H_


#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UpdateIpdLabelRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UpdateIpdLabelRequest_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/LabelParam.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  UpdateIpdLabelRequest
    : public ModelBase
{
public:
    UpdateIpdLabelRequest();
    virtual ~UpdateIpdLabelRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateIpdLabelRequest members

    /// <summary>
    /// 项目32位ID，项目唯一标识。通过查询IPD项目列表获取，响应消息体中的id字段的值就是项目ID。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 标签ID，标签唯一标识。 可以通过查询标签列表接口获取，响应消息体中的id字段的值就是标签ID。
    /// </summary>

    std::string getLabelId() const;
    bool labelIdIsSet() const;
    void unsetlabelId();
    void setLabelId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    LabelParam getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const LabelParam& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string labelId_;
    bool labelIdIsSet_;
    LabelParam body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateIpdLabelRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateIpdLabelRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UpdateIpdLabelRequest_H_


#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIpdFieldsV2Request_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIpdFieldsV2Request_H_


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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ShowIpdFieldsV2Request
    : public ModelBase
{
public:
    ShowIpdFieldsV2Request();
    virtual ~ShowIpdFieldsV2Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowIpdFieldsV2Request members

    /// <summary>
    /// 项目32位ID，项目唯一标识。通过查询IPD项目列表获取，响应消息体中的id字段的值就是项目ID。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 工作项类型ID，工作项类型的唯一标识。 不同项目模型下可选值不同： - IPD-系统设备类：10021（RR）、10065（SF）、10020（IR）、10022（SR）、10029（AR）、10027（Task）、10033（Bug） - IPD-独立软件类：10021（RR）、10065（SF）、10020（IR）、10023（US）、10027（Task）、10033（Bug） - IPD-自运营软件/云服务类：10001（Epic）、10028（FE）、10021（RR）、10023（US）、10027（Task）、10033（Bug）
    /// </summary>

    std::string getCategoryId() const;
    bool categoryIdIsSet() const;
    void unsetcategoryId();
    void setCategoryId(const std::string& value);

    /// <summary>
    /// 层级字段ID。用于过滤层级类型的字段，当需要按层级结构筛选字段时传入。
    /// </summary>

    std::string getCategoryLayerId() const;
    bool categoryLayerIdIsSet() const;
    void unsetcategoryLayerId();
    void setCategoryLayerId(const std::string& value);

    /// <summary>
    /// 目标项目32位ID，项目唯一标识。通过查询IPD项目列表获取，响应消息体中的id字段的值就是项目ID。当需要查询其他项目的字段配置时传入。
    /// </summary>

    std::string getTargetProjectId() const;
    bool targetProjectIdIsSet() const;
    void unsettargetProjectId();
    void setTargetProjectId(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string categoryId_;
    bool categoryIdIsSet_;
    std::string categoryLayerId_;
    bool categoryLayerIdIsSet_;
    std::string targetProjectId_;
    bool targetProjectIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowIpdFieldsV2Request& dereference_from_shared_ptr(std::shared_ptr<ShowIpdFieldsV2Request> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIpdFieldsV2Request_H_

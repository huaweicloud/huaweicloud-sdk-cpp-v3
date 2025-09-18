
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTaskDefectsRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTaskDefectsRequest_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  ShowTaskDefectsRequest
    : public ModelBase
{
public:
    ShowTaskDefectsRequest();
    virtual ~ShowTaskDefectsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTaskDefectsRequest members

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 分页索引，偏移量
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页显示的数量,每页最多显示100条
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 问题状态筛选
    /// </summary>

    std::string getStatusIds() const;
    bool statusIdsIsSet() const;
    void unsetstatusIds();
    void setStatusIds(const std::string& value);

    /// <summary>
    /// 严重级别，0致命，1严重，2一般，3提示
    /// </summary>

    std::string getSeverity() const;
    bool severityIsSet() const;
    void unsetseverity();
    void setSeverity(const std::string& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string statusIds_;
    bool statusIdsIsSet_;
    std::string severity_;
    bool severityIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowTaskDefectsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowTaskDefectsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTaskDefectsRequest_H_

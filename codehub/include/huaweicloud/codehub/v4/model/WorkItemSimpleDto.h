
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_WorkItemSimpleDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_WorkItemSimpleDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 关联工作项基本信息。
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  WorkItemSimpleDto
    : public ModelBase
{
public:
    WorkItemSimpleDto();
    virtual ~WorkItemSimpleDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkItemSimpleDto members

    /// <summary>
    /// **参数解释：** 工作项编号。
    /// </summary>

    std::string getRelatedId() const;
    bool relatedIdIsSet() const;
    void unsetrelatedId();
    void setRelatedId(const std::string& value);

    /// <summary>
    /// **参数解释：** 工作项地址。
    /// </summary>

    std::string getRelatedUrl() const;
    bool relatedUrlIsSet() const;
    void unsetrelatedUrl();
    void setRelatedUrl(const std::string& value);


protected:
    std::string relatedId_;
    bool relatedIdIsSet_;
    std::string relatedUrl_;
    bool relatedUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_WorkItemSimpleDto_H_


#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ShowTaskLogsRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ShowTaskLogsRequest_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  ShowTaskLogsRequest
    : public ModelBase
{
public:
    ShowTaskLogsRequest();
    virtual ~ShowTaskLogsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTaskLogsRequest members

    /// <summary>
    /// 应用id
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// 部署记录id
    /// </summary>

    std::string getRecordId() const;
    bool recordIdIsSet() const;
    void unsetrecordId();
    void setRecordId(const std::string& value);

    /// <summary>
    /// 起始位置，默认0；长度1-19
    /// </summary>

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);

    /// <summary>
    /// 结束位置，开始为0；长度1-19
    /// </summary>

    std::string getEndOffset() const;
    bool endOffsetIsSet() const;
    void unsetendOffset();
    void setEndOffset(const std::string& value);

    /// <summary>
    /// 步骤id；如果传，则按step查询日志；长度1-60
    /// </summary>

    std::string getStepId() const;
    bool stepIdIsSet() const;
    void unsetstepId();
    void setStepId(const std::string& value);


protected:
    std::string appId_;
    bool appIdIsSet_;
    std::string recordId_;
    bool recordIdIsSet_;
    std::string offset_;
    bool offsetIsSet_;
    std::string endOffset_;
    bool endOffsetIsSet_;
    std::string stepId_;
    bool stepIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowTaskLogsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowTaskLogsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ShowTaskLogsRequest_H_

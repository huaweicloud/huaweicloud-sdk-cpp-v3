
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_DeleteDataFilterRulesRequest_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_DeleteDataFilterRulesRequest_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/DeleteDataFilterRuleReq.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  DeleteDataFilterRulesRequest
    : public ModelBase
{
public:
    DeleteDataFilterRulesRequest();
    virtual ~DeleteDataFilterRulesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteDataFilterRulesRequest members

    /// <summary>
    /// 数据迁移任务ID，用于指定要删除过滤规则的目标任务。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 请求语言类型。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DeleteDataFilterRuleReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DeleteDataFilterRuleReq& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;
    DeleteDataFilterRuleReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteDataFilterRulesRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteDataFilterRulesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_DeleteDataFilterRulesRequest_H_

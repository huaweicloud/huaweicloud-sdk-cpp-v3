
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateDataLevelTableCompareJobRequest_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateDataLevelTableCompareJobRequest_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v3/model/CreateDataLevelTableCompareJobReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  CreateDataLevelTableCompareJobRequest
    : public ModelBase
{
public:
    CreateDataLevelTableCompareJobRequest();
    virtual ~CreateDataLevelTableCompareJobRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDataLevelTableCompareJobRequest members

    /// <summary>
    /// 请求语言类型。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateDataLevelTableCompareJobReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateDataLevelTableCompareJobReq& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    CreateDataLevelTableCompareJobReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateDataLevelTableCompareJobRequest& dereference_from_shared_ptr(std::shared_ptr<CreateDataLevelTableCompareJobRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateDataLevelTableCompareJobRequest_H_

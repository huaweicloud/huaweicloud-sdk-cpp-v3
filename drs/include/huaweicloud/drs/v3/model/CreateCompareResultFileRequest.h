
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateCompareResultFileRequest_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateCompareResultFileRequest_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v3/model/ExportCompareResultReq.h>

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
class HUAWEICLOUD_DRS_V3_EXPORT  CreateCompareResultFileRequest
    : public ModelBase
{
public:
    CreateCompareResultFileRequest();
    virtual ~CreateCompareResultFileRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateCompareResultFileRequest members

    /// <summary>
    /// 请求语言类型。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 区域ID，例如：cn-north-4。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

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

    ExportCompareResultReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ExportCompareResultReq& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    ExportCompareResultReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateCompareResultFileRequest& dereference_from_shared_ptr(std::shared_ptr<CreateCompareResultFileRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateCompareResultFileRequest_H_

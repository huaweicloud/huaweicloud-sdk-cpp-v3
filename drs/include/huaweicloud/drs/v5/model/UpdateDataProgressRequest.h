
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_UpdateDataProgressRequest_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_UpdateDataProgressRequest_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v5/model/DataProcessReq.h>

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
class HUAWEICLOUD_DRS_V5_EXPORT  UpdateDataProgressRequest
    : public ModelBase
{
public:
    UpdateDataProgressRequest();
    virtual ~UpdateDataProgressRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDataProgressRequest members

    /// <summary>
    /// 任务ID。
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

    DataProcessReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DataProcessReq& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;
    DataProcessReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateDataProgressRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateDataProgressRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_UpdateDataProgressRequest_H_

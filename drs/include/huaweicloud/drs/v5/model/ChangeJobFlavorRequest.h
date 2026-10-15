
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ChangeJobFlavorRequest_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ChangeJobFlavorRequest_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v5/model/ChangeFlavorReq.h>

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
class HUAWEICLOUD_DRS_V5_EXPORT  ChangeJobFlavorRequest
    : public ModelBase
{
public:
    ChangeJobFlavorRequest();
    virtual ~ChangeJobFlavorRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeJobFlavorRequest members

    /// <summary>
    /// 规格变更任务ID。示例值：27f6a81-7d6b-4d56-a184-7d30576jb201
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

    ChangeFlavorReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ChangeFlavorReq& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;
    ChangeFlavorReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ChangeJobFlavorRequest& dereference_from_shared_ptr(std::shared_ptr<ChangeJobFlavorRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ChangeJobFlavorRequest_H_

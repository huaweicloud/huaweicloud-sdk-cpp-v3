
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ModifyGroupAndStreamRequest_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ModifyGroupAndStreamRequest_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v3/model/LtsInfo.h>

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
class HUAWEICLOUD_DRS_V3_EXPORT  ModifyGroupAndStreamRequest
    : public ModelBase
{
public:
    ModifyGroupAndStreamRequest();
    virtual ~ModifyGroupAndStreamRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyGroupAndStreamRequest members

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

    LtsInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const LtsInfo& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    LtsInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ModifyGroupAndStreamRequest& dereference_from_shared_ptr(std::shared_ptr<ModifyGroupAndStreamRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_ModifyGroupAndStreamRequest_H_

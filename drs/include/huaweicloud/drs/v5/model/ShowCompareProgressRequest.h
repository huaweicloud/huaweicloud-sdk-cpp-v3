
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowCompareProgressRequest_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowCompareProgressRequest_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_DRS_V5_EXPORT  ShowCompareProgressRequest
    : public ModelBase
{
public:
    ShowCompareProgressRequest();
    virtual ~ShowCompareProgressRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowCompareProgressRequest members

    /// <summary>
    /// 请求语言类型。 -en-us：英文 -zh-cn：中文
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
    /// 对比任务ID。
    /// </summary>

    std::string getCompareJobId() const;
    bool compareJobIdIsSet() const;
    void unsetcompareJobId();
    void setCompareJobId(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string compareJobId_;
    bool compareJobIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowCompareProgressRequest& dereference_from_shared_ptr(std::shared_ptr<ShowCompareProgressRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowCompareProgressRequest_H_

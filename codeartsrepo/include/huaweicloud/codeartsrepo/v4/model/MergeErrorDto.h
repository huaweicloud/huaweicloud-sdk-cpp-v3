
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_MergeErrorDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_MergeErrorDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  MergeErrorDto
    : public ModelBase
{
public:
    MergeErrorDto();
    virtual ~MergeErrorDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MergeErrorDto members

    /// <summary>
    /// 合并人名字
    /// </summary>

    std::string getMergeUserName() const;
    bool mergeUserNameIsSet() const;
    void unsetmergeUserName();
    void setMergeUserName(const std::string& value);

    /// <summary>
    /// 合入时间
    /// </summary>

    std::string getMergeStartTime() const;
    bool mergeStartTimeIsSet() const;
    void unsetmergeStartTime();
    void setMergeStartTime(const std::string& value);

    /// <summary>
    /// 错误标题
    /// </summary>

    std::string getErrorTitle() const;
    bool errorTitleIsSet() const;
    void unseterrorTitle();
    void setErrorTitle(const std::string& value);

    /// <summary>
    /// 状态码
    /// </summary>

    std::string getHttpCodeStatus() const;
    bool httpCodeStatusIsSet() const;
    void unsethttpCodeStatus();
    void setHttpCodeStatus(const std::string& value);

    /// <summary>
    /// 错误码
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// 错误信息
    /// </summary>

    std::string getErrorMessage() const;
    bool errorMessageIsSet() const;
    void unseterrorMessage();
    void setErrorMessage(const std::string& value);


protected:
    std::string mergeUserName_;
    bool mergeUserNameIsSet_;
    std::string mergeStartTime_;
    bool mergeStartTimeIsSet_;
    std::string errorTitle_;
    bool errorTitleIsSet_;
    std::string httpCodeStatus_;
    bool httpCodeStatusIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string errorMessage_;
    bool errorMessageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_MergeErrorDto_H_

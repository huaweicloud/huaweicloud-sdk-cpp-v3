
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExtraInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExtraInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/AwVariable.h>
#include <huaweicloud/cloudtest/v1/model/MockInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ExtraInfo
    : public ModelBase
{
public:
    ExtraInfo();
    virtual ~ExtraInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExtraInfo members

    /// <summary>
    /// 子级导入的包
    /// </summary>

    std::vector<std::string>& getChildImportPackage();
    bool childImportPackageIsSet() const;
    void unsetchildImportPackage();
    void setChildImportPackage(const std::vector<std::string>& value);

    /// <summary>
    /// 文档链接
    /// </summary>

    std::string getDocumentLink() const;
    bool documentLinkIsSet() const;
    void unsetdocumentLink();
    void setDocumentLink(const std::string& value);

    /// <summary>
    /// http请求方法
    /// </summary>

    std::string getHttpMethod() const;
    bool httpMethodIsSet() const;
    void unsethttpMethod();
    void setHttpMethod(const std::string& value);

    /// <summary>
    /// HTTP请求的URL
    /// </summary>

    std::string getHttpUrl() const;
    bool httpUrlIsSet() const;
    void unsethttpUrl();
    void setHttpUrl(const std::string& value);

    /// <summary>
    /// 导入的包
    /// </summary>

    std::vector<std::string>& getImportPackage();
    bool importPackageIsSet() const;
    void unsetimportPackage();
    void setImportPackage(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    MockInfo getMock() const;
    bool mockIsSet() const;
    void unsetmock();
    void setMock(const MockInfo& value);

    /// <summary>
    /// 输出参数
    /// </summary>

    std::vector<AwVariable>& getOutputParam();
    bool outputParamIsSet() const;
    void unsetoutputParam();
    void setOutputParam(const std::vector<AwVariable>& value);

    /// <summary>
    /// 参数依赖
    /// </summary>

    std::string getParamDependent() const;
    bool paramDependentIsSet() const;
    void unsetparamDependent();
    void setParamDependent(const std::string& value);

    /// <summary>
    /// 摘要
    /// </summary>

    std::string getSummary() const;
    bool summaryIsSet() const;
    void unsetsummary();
    void setSummary(const std::string& value);


protected:
    std::vector<std::string> childImportPackage_;
    bool childImportPackageIsSet_;
    std::string documentLink_;
    bool documentLinkIsSet_;
    std::string httpMethod_;
    bool httpMethodIsSet_;
    std::string httpUrl_;
    bool httpUrlIsSet_;
    std::vector<std::string> importPackage_;
    bool importPackageIsSet_;
    MockInfo mock_;
    bool mockIsSet_;
    std::vector<AwVariable> outputParam_;
    bool outputParamIsSet_;
    std::string paramDependent_;
    bool paramDependentIsSet_;
    std::string summary_;
    bool summaryIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExtraInfo_H_

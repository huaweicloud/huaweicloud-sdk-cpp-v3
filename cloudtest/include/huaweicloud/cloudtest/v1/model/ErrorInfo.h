
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ErrorInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ErrorInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ErrorInfo
    : public ModelBase
{
public:
    ErrorInfo();
    virtual ~ErrorInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ErrorInfo members

    /// <summary>
    /// 错误内容的描述
    /// </summary>

    std::string getErrorContent() const;
    bool errorContentIsSet() const;
    void unseterrorContent();
    void setErrorContent(const std::string& value);

    /// <summary>
    /// 错误索引的描述
    /// </summary>

    std::string getErrorIndex() const;
    bool errorIndexIsSet() const;
    void unseterrorIndex();
    void setErrorIndex(const std::string& value);

    /// <summary>
    /// 错误点的描述
    /// </summary>

    std::string getErrorPoint() const;
    bool errorPointIsSet() const;
    void unseterrorPoint();
    void setErrorPoint(const std::string& value);

    /// <summary>
    /// 是否高亮标识
    /// </summary>

    bool isHighLight() const;
    bool highLightIsSet() const;
    void unsethighLight();
    void setHighLight(bool value);


protected:
    std::string errorContent_;
    bool errorContentIsSet_;
    std::string errorIndex_;
    bool errorIndexIsSet_;
    std::string errorPoint_;
    bool errorPointIsSet_;
    bool highLight_;
    bool highLightIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ErrorInfo_H_

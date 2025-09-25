
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_DiffRefsParamDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_DiffRefsParamDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  DiffRefsParamDto
    : public ModelBase
{
public:
    DiffRefsParamDto();
    virtual ~DiffRefsParamDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DiffRefsParamDto members

    /// <summary>
    /// 合并请求中原分支与目标分支的共同基准点
    /// </summary>

    std::string getBaseSha() const;
    bool baseShaIsSet() const;
    void unsetbaseSha();
    void setBaseSha(const std::string& value);

    /// <summary>
    /// 合并请求中，从共同基准点开始到原分支方向的第一个提交点
    /// </summary>

    std::string getStartSha() const;
    bool startShaIsSet() const;
    void unsetstartSha();
    void setStartSha(const std::string& value);

    /// <summary>
    /// 合并请求中原分支指向的提交点
    /// </summary>

    std::string getHeadSha() const;
    bool headShaIsSet() const;
    void unsetheadSha();
    void setHeadSha(const std::string& value);


protected:
    std::string baseSha_;
    bool baseShaIsSet_;
    std::string startSha_;
    bool startShaIsSet_;
    std::string headSha_;
    bool headShaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_DiffRefsParamDto_H_

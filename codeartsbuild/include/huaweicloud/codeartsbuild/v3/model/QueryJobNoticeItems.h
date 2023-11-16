
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_QueryJobNoticeItems_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_QueryJobNoticeItems_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  QueryJobNoticeItems
    : public ModelBase
{
public:
    QueryJobNoticeItems();
    virtual ~QueryJobNoticeItems();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryJobNoticeItems members

    /// <summary>
    /// 通知类型
    /// </summary>

    std::string getNoticeType() const;
    bool noticeTypeIsSet() const;
    void unsetnoticeType();
    void setNoticeType(const std::string& value);

    /// <summary>
    /// 通知品种开启详情的表
    /// </summary>

    std::map<std::string, bool>& getEnableMap();
    bool enableMapIsSet() const;
    void unsetenableMap();
    void setEnableMap(std::map<std::string, bool> value);

    /// <summary>
    /// 参数配置
    /// </summary>

    std::string getParamConfig() const;
    bool paramConfigIsSet() const;
    void unsetparamConfig();
    void setParamConfig(const std::string& value);


protected:
    std::string noticeType_;
    bool noticeTypeIsSet_;
    std::map<std::string, bool> enableMap_;
    bool enableMapIsSet_;
    std::string paramConfig_;
    bool paramConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_QueryJobNoticeItems_H_

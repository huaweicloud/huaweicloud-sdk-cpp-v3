
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_CompressResponse_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_CompressResponse_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/CompressRules.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  CompressResponse
    : public ModelBase
{
public:
    CompressResponse();
    virtual ~CompressResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CompressResponse members

    /// <summary>
    /// GZIP压缩开关。0关闭。1打开
    /// </summary>

    int32_t getCompressSwitch() const;
    bool compressSwitchIsSet() const;
    void unsetcompressSwitch();
    void setCompressSwitch(int32_t value);

    /// <summary>
    /// GZIP压缩规则
    /// </summary>

    std::vector<CompressRules>& getCompressRules();
    bool compressRulesIsSet() const;
    void unsetcompressRules();
    void setCompressRules(const std::vector<CompressRules>& value);


protected:
    int32_t compressSwitch_;
    bool compressSwitchIsSet_;
    std::vector<CompressRules> compressRules_;
    bool compressRulesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_CompressResponse_H_

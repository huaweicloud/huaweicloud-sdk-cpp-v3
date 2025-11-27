
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_TopPathSummary_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_TopPathSummary_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// topPath详情数据
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  TopPathSummary
    : public ModelBase
{
public:
    TopPathSummary();
    virtual ~TopPathSummary();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TopPathSummary members

    /// <summary>
    /// path值。
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// 对应查询类型的值。（流量单位：Byte）
    /// </summary>

    int64_t getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(int64_t value);


protected:
    std::string path_;
    bool pathIsSet_;
    int64_t value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_TopPathSummary_H_

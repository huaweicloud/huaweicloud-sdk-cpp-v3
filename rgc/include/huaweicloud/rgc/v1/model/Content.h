
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_Content_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_Content_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 控制策略内容。
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  Content
    : public ModelBase
{
public:
    Content();
    virtual ~Content();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Content members

    /// <summary>
    /// 英文策略内容。
    /// </summary>

    std::string getEn() const;
    bool enIsSet() const;
    void unseten();
    void setEn(const std::string& value);

    /// <summary>
    /// 中文策略内容。
    /// </summary>

    std::string getCh() const;
    bool chIsSet() const;
    void unsetch();
    void setCh(const std::string& value);


protected:
    std::string en_;
    bool enIsSet_;
    std::string ch_;
    bool chIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_Content_H_

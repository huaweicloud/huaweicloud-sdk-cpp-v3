
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ProductTextInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ProductTextInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 商品文本信息
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ProductTextInfo
    : public ModelBase
{
public:
    ProductTextInfo();
    virtual ~ProductTextInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProductTextInfo members

    /// <summary>
    /// 文本标题
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 文本
    /// </summary>

    std::string getText() const;
    bool textIsSet() const;
    void unsettext();
    void setText(const std::string& value);


protected:
    std::string title_;
    bool titleIsSet_;
    std::string text_;
    bool textIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ProductTextInfo_H_

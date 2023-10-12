
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowApiVersionLinksParams_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowApiVersionLinksParams_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// API的URL地址。
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ShowApiVersionLinksParams
    : public ModelBase
{
public:
    ShowApiVersionLinksParams();
    virtual ~ShowApiVersionLinksParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowApiVersionLinksParams members

    /// <summary>
    /// 链接的描述
    /// </summary>

    std::string getRel() const;
    bool relIsSet() const;
    void unsetrel();
    void setRel(const std::string& value);

    /// <summary>
    /// 版本号查询链接
    /// </summary>

    std::string getHref() const;
    bool hrefIsSet() const;
    void unsethref();
    void setHref(const std::string& value);


protected:
    std::string rel_;
    bool relIsSet_;
    std::string href_;
    bool hrefIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowApiVersionLinksParams_H_


#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_LinksItem_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_LinksItem_H_

#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  LinksItem
    : public ModelBase
{
public:
    LinksItem();
    virtual ~LinksItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// LinksItem members

    /// <summary>
    /// 对应快捷链接。
    /// </summary>

    std::string getHref() const;
    bool hrefIsSet() const;
    void unsethref();
    void setHref(const std::string& value);

    /// <summary>
    /// 快捷链接标记名称。
    /// </summary>

    std::string getRel() const;
    bool relIsSet() const;
    void unsetrel();
    void setRel(const std::string& value);


protected:
    std::string href_;
    bool hrefIsSet_;
    std::string rel_;
    bool relIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_LinksItem_H_

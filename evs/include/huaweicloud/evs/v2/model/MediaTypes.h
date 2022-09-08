
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_MediaTypes_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_MediaTypes_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 接口版本的请求消息类型信息
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  MediaTypes
    : public ModelBase
{
public:
    MediaTypes();
    virtual ~MediaTypes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MediaTypes members

    /// <summary>
    /// 文本类型
    /// </summary>

    std::string getBase() const;
    bool baseIsSet() const;
    void unsetbase();
    void setBase(const std::string& value);

    /// <summary>
    /// 返回类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string base_;
    bool baseIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_MediaTypes_H_

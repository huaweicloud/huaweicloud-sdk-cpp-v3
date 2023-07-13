
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ErrRsp_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ErrRsp_H_

#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/ErrMsg.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 当北向接口报错时，按此格式返回到body体中
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ErrRsp
    : public ModelBase
{
public:
    ErrRsp();
    virtual ~ErrRsp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ErrRsp members

    /// <summary>
    /// 
    /// </summary>

    ErrMsg getError() const;
    bool errorIsSet() const;
    void unseterror();
    void setError(const ErrMsg& value);


protected:
    ErrMsg error_;
    bool errorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ErrRsp_H_

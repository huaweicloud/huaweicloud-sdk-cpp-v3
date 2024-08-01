
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowLogStreamShardsResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowLogStreamShardsResponse_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ShowLogStreamShardsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowLogStreamShardsResponse();
    virtual ~ShowLogStreamShardsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowLogStreamShardsResponse members

    /// <summary>
    /// 错误码
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// 是否完全查询
    /// </summary>

    bool isIsQueryComplete() const;
    bool isQueryCompleteIsSet() const;
    void unsetisQueryComplete();
    void setIsQueryComplete(bool value);

    /// <summary>
    /// 查询结果
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);


protected:
    std::string errorCode_;
    bool errorCodeIsSet_;
    bool isQueryComplete_;
    bool isQueryCompleteIsSet_;
    std::string result_;
    bool resultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowLogStreamShardsResponse_H_

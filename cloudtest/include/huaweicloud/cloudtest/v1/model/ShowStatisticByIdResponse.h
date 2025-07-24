
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowStatisticByIdResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowStatisticByIdResponse_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowStatisticByIdResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowStatisticByIdResponse();
    virtual ~ShowStatisticByIdResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStatisticByIdResponse members

    /// <summary>
    /// 
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::map<std::string, int32_t>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(std::map<std::string, int32_t> value);

    /// <summary>
    /// 
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    std::string code_;
    bool codeIsSet_;
    std::map<std::string, int32_t> data_;
    bool dataIsSet_;
    std::string message_;
    bool messageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowStatisticByIdResponse_H_

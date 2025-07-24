
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowAssetResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowAssetResponse_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/Asset.h>
#include <string>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowAssetResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAssetResponse();
    virtual ~ShowAssetResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAssetResponse members

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

    std::vector<Asset>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<Asset>& value);

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
    std::vector<Asset> data_;
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

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowAssetResponse_H_

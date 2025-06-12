
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListKeystoreSearchResponseBody_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListKeystoreSearchResponseBody_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/ListKeystoreSearchResponseBody_result_keystore_list.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 租户下文件列表
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ListKeystoreSearchResponseBody_result
    : public ModelBase
{
public:
    ListKeystoreSearchResponseBody_result();
    virtual ~ListKeystoreSearchResponseBody_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListKeystoreSearchResponseBody_result members

    /// <summary>
    /// 总数
    /// </summary>

    double getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(double value);

    /// <summary>
    /// 文件列表
    /// </summary>

    std::vector<ListKeystoreSearchResponseBody_result_keystore_list>& getKeystoreList();
    bool keystoreListIsSet() const;
    void unsetkeystoreList();
    void setKeystoreList(const std::vector<ListKeystoreSearchResponseBody_result_keystore_list>& value);


protected:
    double total_;
    bool totalIsSet_;
    std::vector<ListKeystoreSearchResponseBody_result_keystore_list> keystoreList_;
    bool keystoreListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListKeystoreSearchResponseBody_result_H_

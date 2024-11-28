
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ListAliasesRequest_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ListAliasesRequest_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  ListAliasesRequest
    : public ModelBase
{
public:
    ListAliasesRequest();
    virtual ~ListAliasesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAliasesRequest members

    /// <summary>
    /// 密钥ID
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// 指定查询返回记录条数
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);

    /// <summary>
    /// 分页查询起始位置标识
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    std::string limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAliasesRequest& dereference_from_shared_ptr(std::shared_ptr<ListAliasesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ListAliasesRequest_H_

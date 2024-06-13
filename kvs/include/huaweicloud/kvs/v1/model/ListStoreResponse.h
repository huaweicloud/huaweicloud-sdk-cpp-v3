
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_ListStoreResponse_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_ListStoreResponse_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_KVS_V1_EXPORT  ListStoreResponse
    : public ModelBase, public HttpResponse
{
public:
    ListStoreResponse();
    virtual ~ListStoreResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// ListStoreResponse members

    /// <summary>
    /// 本次响应后的游标位置，下次请求时携带。 - 长度：[16,52] - 取值字符限制：[a-z0-9-]+ &gt; 如果为空，表示后面无更多仓名。
    /// </summary>

    std::string getCursorName() const;
    bool cursorNameIsSet() const;
    void unsetcursorName();
    void setCursorName(const std::string& value);

    /// <summary>
    /// 返回的仓名列表。
    /// </summary>

    std::vector<std::string>& getStores();
    bool storesIsSet() const;
    void unsetstores();
    void setStores(const std::vector<std::string>& value);


protected:
    std::string cursorName_;
    bool cursorNameIsSet_;
    std::vector<std::string> stores_;
    bool storesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_ListStoreResponse_H_

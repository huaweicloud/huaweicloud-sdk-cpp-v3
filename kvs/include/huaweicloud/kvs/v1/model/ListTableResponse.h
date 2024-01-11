
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_ListTableResponse_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_ListTableResponse_H_

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
class HUAWEICLOUD_KVS_V1_EXPORT  ListTableResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTableResponse();
    virtual ~ListTableResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// ListTableResponse members

    /// <summary>
    /// 本次响应后的游标位置，下次请求时携带，如果为空，表示后面无更多 - 长度：[3, 63] - 取值字符限制：[a-z0-9_-]+ &gt; 如果为空，表示后面无更多。
    /// </summary>

    std::string getCursorName() const;
    bool cursorNameIsSet() const;
    void unsetcursorName();
    void setCursorName(const std::string& value);

    /// <summary>
    /// 返回的表名列表。 - 长度：最大_100
    /// </summary>

    std::vector<std::string>& getTableNames();
    bool tableNamesIsSet() const;
    void unsettableNames();
    void setTableNames(const std::vector<std::string>& value);


protected:
    std::string cursorName_;
    bool cursorNameIsSet_;
    std::vector<std::string> tableNames_;
    bool tableNamesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_ListTableResponse_H_

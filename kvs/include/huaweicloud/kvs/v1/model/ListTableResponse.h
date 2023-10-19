
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
    /// 
    /// </summary>

    std::string getCursorName() const;
    bool cursorNameIsSet() const;
    void unsetcursorName();
    void setCursorName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getTableNameList();
    bool tableNameListIsSet() const;
    void unsettableNameList();
    void setTableNameList(const std::vector<std::string>& value);


protected:
    std::string cursorName_;
    bool cursorNameIsSet_;
    std::vector<std::string> tableNameList_;
    bool tableNameListIsSet_;

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


#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListInsertCommandsResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListInsertCommandsResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/metastudio/v1/model/InsertCommandItem.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ListInsertCommandsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListInsertCommandsResponse();
    virtual ~ListInsertCommandsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInsertCommandsResponse members

    /// <summary>
    /// 命令总数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 插入播放命令列表。
    /// </summary>

    std::vector<InsertCommandItem>& getInsertCommands();
    bool insertCommandsIsSet() const;
    void unsetinsertCommands();
    void setInsertCommands(const std::vector<InsertCommandItem>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<InsertCommandItem> insertCommands_;
    bool insertCommandsIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListInsertCommandsResponse_H_


#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ExtendReplicationRequestParams_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ExtendReplicationRequestParams_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 复制对扩容请求数据结构
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ExtendReplicationRequestParams
    : public ModelBase
{
public:
    ExtendReplicationRequestParams();
    virtual ~ExtendReplicationRequestParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ExtendReplicationRequestParams members

    /// <summary>
    /// 复制对内的磁盘扩容后的最终容量。单位：GB 说明:该参数的取值为小数时，系统默认取小数点前的整数值。
    /// </summary>

    int32_t getNewSize() const;
    bool newSizeIsSet() const;
    void unsetnewSize();
    void setNewSize(int32_t value);


protected:
    int32_t newSize_;
    bool newSizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ExtendReplicationRequestParams_H_

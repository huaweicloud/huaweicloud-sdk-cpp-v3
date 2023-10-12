
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowMembersDetailRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowMembersDetailRequest_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ShowMembersDetailRequest
    : public ModelBase
{
public:
    ShowMembersDetailRequest();
    virtual ~ShowMembersDetailRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowMembersDetailRequest members

    /// <summary>
    /// 备份id
    /// </summary>

    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);

    /// <summary>
    /// 接受备份共享的项目id
    /// </summary>

    std::string getDestProjectId() const;
    bool destProjectIdIsSet() const;
    void unsetdestProjectId();
    void setDestProjectId(const std::string& value);

    /// <summary>
    /// 接受的共享备份副本注册的镜像id
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);

    /// <summary>
    /// 备份共享状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 目标端接受共享备份的存储库id，仅支持uuid
    /// </summary>

    std::string getVaultId() const;
    bool vaultIdIsSet() const;
    void unsetvaultId();
    void setVaultId(const std::string& value);

    /// <summary>
    /// 每页显示的条目数量，正整数
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 上一次查询最后一条的id，仅支持uuid
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 偏移值，正整数
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// sort的内容为一组由逗号分隔的属性及可选排序方向组成，形如&lt;key1&gt;[:&lt;direction&gt;],&lt;key2&gt;[:&lt;direction&gt;],其中direction的取值为asc (升序) 或 desc (降序),如没有传入direction参数，默认为降序，sort内容的长度限制为255个字符。
    /// </summary>

    std::string getSort() const;
    bool sortIsSet() const;
    void unsetsort();
    void setSort(const std::string& value);


protected:
    std::string backupId_;
    bool backupIdIsSet_;
    std::string destProjectId_;
    bool destProjectIdIsSet_;
    std::string imageId_;
    bool imageIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string vaultId_;
    bool vaultIdIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string sort_;
    bool sortIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowMembersDetailRequest& dereference_from_shared_ptr(std::shared_ptr<ShowMembersDetailRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowMembersDetailRequest_H_

#ifndef HUAWEICLOUD_SDK_KMS_V2_KmsMeta_H_
#define HUAWEICLOUD_SDK_KMS_V2_KmsMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/kms/v2/KmsExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_KMS_V2_EXPORT  KmsMeta {
public:
    static HttpRequestDef genRequestDefForAssociateAlias();
    static HttpRequestDef genRequestDefForBatchCreateKmsTags();
    static HttpRequestDef genRequestDefForCancelGrant();
    static HttpRequestDef genRequestDefForCancelKeyDeletion();
    static HttpRequestDef genRequestDefForCancelSelfGrant();
    static HttpRequestDef genRequestDefForCreateAlias();
    static HttpRequestDef genRequestDefForCreateDatakey();
    static HttpRequestDef genRequestDefForCreateDatakeyWithoutPlaintext();
    static HttpRequestDef genRequestDefForCreateEcDatakeyPair();
    static HttpRequestDef genRequestDefForCreateGrant();
    static HttpRequestDef genRequestDefForCreateKey();
    static HttpRequestDef genRequestDefForCreateKeyStore();
    static HttpRequestDef genRequestDefForCreateKmsTag();
    static HttpRequestDef genRequestDefForCreateParametersForImport();
    static HttpRequestDef genRequestDefForCreatePin();
    static HttpRequestDef genRequestDefForCreateRandom();
    static HttpRequestDef genRequestDefForCreateRsaDatakeyPair();
    static HttpRequestDef genRequestDefForDecryptData();
    static HttpRequestDef genRequestDefForDecryptDatakey();
    static HttpRequestDef genRequestDefForDeleteAlias();
    static HttpRequestDef genRequestDefForDeleteImportedKeyMaterial();
    static HttpRequestDef genRequestDefForDeleteKey();
    static HttpRequestDef genRequestDefForDeleteKeyStore();
    static HttpRequestDef genRequestDefForDeleteTag();
    static HttpRequestDef genRequestDefForDisableKey();
    static HttpRequestDef genRequestDefForDisableKeyRotation();
    static HttpRequestDef genRequestDefForDisableKeyStore();
    static HttpRequestDef genRequestDefForEnableKey();
    static HttpRequestDef genRequestDefForEnableKeyRotation();
    static HttpRequestDef genRequestDefForEnableKeyStore();
    static HttpRequestDef genRequestDefForEncryptData();
    static HttpRequestDef genRequestDefForEncryptDatakey();
    static HttpRequestDef genRequestDefForGenerateMac();
    static HttpRequestDef genRequestDefForImportKeyMaterial();
    static HttpRequestDef genRequestDefForListAliases();
    static HttpRequestDef genRequestDefForListGrants();
    static HttpRequestDef genRequestDefForListKeyDetail();
    static HttpRequestDef genRequestDefForListKeyStores();
    static HttpRequestDef genRequestDefForListKeys();
    static HttpRequestDef genRequestDefForListKmsByTags();
    static HttpRequestDef genRequestDefForListKmsTags();
    static HttpRequestDef genRequestDefForListRetirableGrants();
    static HttpRequestDef genRequestDefForListSupportRegions();
    static HttpRequestDef genRequestDefForReplicateKey();
    static HttpRequestDef genRequestDefForShowKeyRotationStatus();
    static HttpRequestDef genRequestDefForShowKeyStore();
    static HttpRequestDef genRequestDefForShowKmsTags();
    static HttpRequestDef genRequestDefForShowPublicKey();
    static HttpRequestDef genRequestDefForShowUserInstances();
    static HttpRequestDef genRequestDefForShowUserQuotas();
    static HttpRequestDef genRequestDefForSign();
    static HttpRequestDef genRequestDefForUpdateKeyAlias();
    static HttpRequestDef genRequestDefForUpdateKeyDescription();
    static HttpRequestDef genRequestDefForUpdateKeyRotationInterval();
    static HttpRequestDef genRequestDefForUpdatePrimaryRegion();
    static HttpRequestDef genRequestDefForValidateSignature();
    static HttpRequestDef genRequestDefForVerifyMac();
    static HttpRequestDef genRequestDefForShowVersion();
    static HttpRequestDef genRequestDefForShowVersions();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_KmsMeta_H_
